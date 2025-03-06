#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
        {
            return l1;
        }

        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        ListNode *info = NULL; // to store info of last node of l1
        int carry = 0;
        int rem = 0;
        while (temp1 && temp2)
        {
            int sum = temp1->val + temp2->val + carry;
            rem = sum % 10;
            carry = sum / 10;

            // updating info about last node
            info = temp1;

            temp1->val = rem;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        // First list not ended
        while (temp1)
        {
            // Only single iteration is enough
            int sum = temp1->val + carry;
            carry = sum / 10;
            rem = sum % 10;

            temp1->val = rem;
            // updating info
            info = temp1;
            temp1 = temp1->next;
        }

        if (temp2)
        {
            info->next = temp2;
        }
        // Second list not ended
        while (temp2)
        {
            // Only single iteration is enough
            int sum = temp2->val + carry;
            carry = sum / 10;
            rem = sum % 10;

            temp2->val = rem;
            info = temp2;
            temp2 = temp2->next;
        }

        // Carry still remains - creatin a new node for carry
        if (carry != 0)
        {
            ListNode *carryNode = new ListNode(carry);
            info->next = carryNode;
            carry = 0;
        }

        return l1;
    }
};

// Function to create a linked list from a vector
ListNode *createList(vector<int> nums)
{
    if (nums.empty())
        return nullptr;

    ListNode *head = new ListNode(nums[0]);
    ListNode *current = head;

    for (size_t i = 1; i < nums.size(); i++)
    {
        current->next = new ListNode(nums[i]);
        current = current->next;
    }

    return head;
}

// Function to print a linked list
void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Test function
void test()
{
    Solution solution;

    // Test case 1: 342 (2 -> 4 -> 3) + 465 (5 -> 6 -> 4) = 807 (7 -> 0 -> 8)
    ListNode *l1 = createList({2, 4, 3});
    ListNode *l2 = createList({5, 6, 4});

    cout << "Input List 1: ";
    printList(l1);
    cout << "Input List 2: ";
    printList(l2);

    ListNode *result = solution.addTwoNumbers(l1, l2);

    cout << "Result List: ";
    printList(result);
}

// Main function
int main()
{
    test();
    return 0;
}
