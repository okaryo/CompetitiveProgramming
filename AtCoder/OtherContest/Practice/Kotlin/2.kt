fun main(args: Array<String>) {
  var (n, k) = readLine()!!.split(" ").map(String::toInt)
  for (i in 1..k) {
    if (n % 10 != 0) n --
    else n /= 10
  }
  println(n)
}