/*

Queue using stack

Implement a Queue using two stack s1 and s2.

Example 1:

Input:
enqueue(2)
enqueue(3)
dequeue()
enqueue(4)
dequeue()
Output: 2 3
Explanation:
enqueue(2) the queue will be {2}
enqueue(3) the queue will be {2, 3}
dequeue() the poped element will be 2 
the queue will be {3}
enqueue(4) the queue will be {3, 4}
dequeue() the poped element will be 3.  
Example 2:

Input:
enqueue(2)
dequeue()
dequeue()
Output: 2 -1
Your Task:

Since this is a function problem, you don't need to take inputs. You are required to complete the two methods enqueue() which takes an integer 'x' as input denoting the element to be pushed into the queue and dequeue() which returns the integer poped out from the queue.

Expected Time Complexity: O(1) for enqueue() and O(n) for dequeue()
Expected Auxiliary Space: O(1) for both enqueue() and dequeue()

Constraints:
1 <= Number of queries <= 100
1 <= values of the stack <= 100


*/


class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        input.push(x);
        
    }

    int dequeue() {

        if(input.empty()){
            return -1;
        }
        while(!input.empty()){
            int top=input.top();
            input.pop();
            output.push(top);
            }
            
        int p=output.top();
        output.pop();
        while(!output.empty()){
            int top=output.top();
            input.push(top);
            output.pop();
        }
        return p;
    }
};
