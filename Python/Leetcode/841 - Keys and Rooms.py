'''
Q: There are n rooms labeled from 0 to n - 1 and all the rooms are locked except for room 0. Your goal is to visit all the rooms. However, you cannot enter a locked room without having its key.

When you visit a room, you may find a set of distinct keys in it. Each key has a number on it, denoting which room it unlocks, and you can take all of them with you to unlock the other rooms.

Given an array rooms where rooms[i] is the set of keys that you can obtain if you visited room i, return true if you can visit all the rooms, or false otherwise.

'''

class Solution(object):
    # Determines whether it is possible to visit all the rooms in the given list of rooms
    def canVisitAllRooms(self, rooms):
        # Set to track which rooms have been visited
        visited = set()
        # Stack to keep track of the rooms that need to be visited
        stack = [0]

        # While there are rooms in the stack
        while stack:
            # Pop the top room from the stack
            room = stack.pop()
            # If the room has not been visited yet
            if room not in visited:
                # Mark the room as visited
                visited.add(room)
                # Add all the keys to other rooms in the current room to the stack
                stack.extend(rooms[room])

        # Return true if all rooms have been visited, false otherwise
        return len(visited) == len(rooms)
