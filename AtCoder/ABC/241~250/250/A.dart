import 'dart:io';

void main() {
  final hw = stdin.readLineSync().split(' ').map((x) => int.parse(x)).toList();
  final rc = stdin.readLineSync().split(' ').map((x) => int.parse(x)).toList();
  int ans = 4;
  if (rc[0] == 1) ans--;
  if (rc[0] == hw[0]) ans--;
  if (rc[1] == 1) ans--;
  if (rc[1] == hw[1]) ans--;
  print(ans);
}
