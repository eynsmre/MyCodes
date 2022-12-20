class Solution {
    // Determines whether it is possible to visit all the rooms in the given list of rooms
    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        // Stack to keep track of the keys to other rooms
        Stack<Integer> keys = new Stack<Integer>();
        // Set to track which rooms have been visited
        Set<Integer> visited = new HashSet<Integer>();

        // Start at room 0 and add its keys to the stack
        keys.push(0);

        // While there are keys in the stack
        while (!keys.isEmpty()) {
            // Pop a key from the stack
            int n = keys.pop();
            // If the room corresponding to the key has not been visited yet
            if (!visited.contains(n)) {
                // Mark the room as visited
                visited.add(n);
                // Add all the keys to other rooms in the current room to the stack
                for (int i = 0; i < rooms.get(n).size(); i++) {
                    keys.push(rooms.get(n).get(i));
                }
            }
        }

        // Return true if all rooms have been visited, false otherwise
        return rooms.size() == visited.size();
    }
}
