#include <iostream>
using namespace std;

class Node {
public:
    int coef;
    int exp;
    Node* next;

    Node(int c, int e) {
        coef = c;
        exp = e;
        next = nullptr;
    }
};

class Polynomial {
public:
    Node* head;

    Polynomial() {
        head = nullptr;
    }

    // Insert at end
    void insert(int coef, int exp) {
        Node* newNode = new Node(coef, exp);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;

        temp->next = newNode;
    }

    // Display polynomial
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->coef << "x^" << temp->exp;
            temp = temp->next;
            if (temp != nullptr) cout << " + ";
        }
        cout << endl;
    }
};

// Add two polynomials
Polynomial add(Polynomial& P1, Polynomial& P2) {

    Polynomial result;

    Node* p1 = P1.head;
    Node* p2 = P2.head;

    while (p1 != nullptr || p2 != nullptr) {

        // Case 1: both have terms
        if (p1 != nullptr && p2 != nullptr) {

            // Same exponent: add coefficients
            if (p1->exp == p2->exp) {
                result.insert(p1->coef + p2->coef, p1->exp);
                p1 = p1->next;
                p2 = p2->next;
            }

            // p1 exponent > p2 exponent → copy p1 term
            else if (p1->exp > p2->exp) {
                result.insert(p1->coef, p1->exp);
                p1 = p1->next;
            }

            // p2 exponent > p1 exponent → copy p2 term
            else {
                result.insert(p2->coef, p2->exp);
                p2 = p2->next;
            }
        }

        // Case 2: p1 only
        else if (p1 != nullptr) {
            result.insert(p1->coef, p1->exp);
            p1 = p1->next;
        }

        // Case 3: p2 only
        else if (p2 != nullptr) {
            result.insert(p2->coef, p2->exp);
            p2 = p2->next;
        }
    }

    return result;
}

int main() {

    Polynomial P1, P2;

    // P1 = 5x^3 + 4x^2 + 2
    P1.insert(5, 3);
    P1.insert(4, 2);
    P1.insert(2, 0);

    // P2 = 3x^3 + 1x^1
    P2.insert(3, 3);
    P2.insert(1, 1);

    cout << "P1: ";
    P1.display();

    cout << "P2: ";
    P2.display();

    Polynomial R = add(P1, P2);

    cout << "Result: ";
    R.display();

    return 0;
}
