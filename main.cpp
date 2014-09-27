#include <iostream>

#include <cstdlib>

#include <thread>
#include <vector>

using namespace std;

// This variable will be extern-ed.
int number_of_nodes;

void printGraph(vector <int>);

int main (void) {
    // We need to take the input here.
    cin >> number_of_nodes;
    vector <int> graph;
    graph.resize(number_of_nodes * number_of_nodes);
    
    int temp;
    for (int i = 0; i < number_of_nodes * number_of_nodes; i++) {
        cin >> temp;
        graph[i] = temp;
    }
    
    printGraph(graph);

    return 0;
}

void printGraph(vector<int> v) {
    for (int i = 0; i < number_of_nodes; i++) {
        for (int j = 0; j < number_of_nodes; j++) {
            cout << v[i*number_of_nodes + j] << " ";
        }
        cout << endl;
    }
    cout << endl;

}
