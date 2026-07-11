class Solution {
  public:
    /*
        Observation:
        - Let the maximum element in the array be 'maxi'.
        - Every other element must be increased until it becomes equal to 'maxi'.
        - The number of moves required for an element A[i] is (maxi - A[i]).
        - Therefore, the total number of moves in the game is:
              Σ (maxi - A[i])

        Winning Strategy:
        - If total moves == 0:
              The array is already equal, so no moves can be made.
              Result: "Draw"

        - If total moves is odd:
              The first player makes the last move.
              Result: "First"

        - If total moves is even:
              The second player makes the last move.
              Result: "Second"

        Time Complexity: O(N)
        Space Complexity: O(1)
    */
    string arrayGame(int N, int A[]) {
        // Find the maximum element in the array.
        int maxi = 0;
        for(int i = 0; i < N; i++) {
            maxi = max(maxi, A[i]);
        }

        // Calculate the total number of moves needed
        // to make every element equal to the maximum.
        long long moves = 0;
        for(int i = 0; i < N; i++) {
            moves += (maxi - A[i]);
        }

        // Decide the winner based on the parity of total moves.
        if(moves == 0) {
            return "Draw";
        } else if(moves % 2 == 0) {
            return "Second";
        }

        return "First";
    }
};
