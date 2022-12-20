//First I couldn't solve this problem, then I checked a solution and understand it.
//In this solution I learned what is dfs and for-each loop is.

/*
Description: There are n rooms labeled from 0 to n - 1 and all the rooms are locked except for room 0. Your goal is to visit all the rooms. However, you cannot enter a locked room without having its key.

When you visit a room, you may find a set of distinct keys in it. Each key has a number on it, denoting which room it unlocks, and you can take all of them with you to unlock the other rooms.

Given an array rooms where rooms[i] is the set of keys that you can obtain if you visited room i, return true if you can visit all the rooms, or false otherwise.
*/

class Solution {
    // Determines whether it is possible to visit all the rooms in the given list of rooms
    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        // Get the number of rooms
        int n = rooms.size();

        // If there are no rooms, return true
        if(n == 0) return true;

        // Create an array to track which rooms have been visited
        boolean[] visited = new boolean[rooms.size()];

        // Start the depth-first search at room 0
        dfs(0, rooms, visited);

        // Check if any rooms have not been visited
        for(int i=0;i<n;i++)
            if(!visited[i])
                return false;

        // If all rooms have been visited, return true
        return true;
    }

    // Recursive depth-first search function that visits all rooms reachable from the current room
    public void dfs(int index, List<List<Integer>> rooms, boolean[] visited) {
        // Mark the current room as visited
        visited[index] = true;

        // Iterate through all the keys to other rooms in the current room
        for (int n : rooms.get(index)) {
            // If the room at index n has not been visited, visit it
            if (!visited[n]) {
                dfs(n, rooms, visited);
            }
        }
    }
}
