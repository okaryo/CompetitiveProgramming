#include<cstdio>
#include<string>
#include<queue>
using namespace std;

int main() {
  int key;
  char com[20];
  priority_queue<int> PQ;

  while (1) {
    scanf("%s", com);
    if (com[0] == 'e' && com[1] == 'n') break;

    if (com[0] == 'i') {
      scanf("%d", &key);
      PQ.push(key);
    } else if (com[1] == 'x') {
      printf("%d\n", PQ.top());
      PQ.pop();
    } else if (com[0] == 'e') {
      break;
    }
  }
}