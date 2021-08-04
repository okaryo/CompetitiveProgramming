fun main() {
    val nx = readLine()!!.split(" ").map(String::toInt)
    val a = readLine()!!.split(" ").map(String::toInt)
    val sum = a.withIndex().sumBy {
      if ((it.index + 1) % 2 == 0) it.value - 1
      else it.value
    }
    if  (nx[1] >= sum) println("Yes") else println("No")
}
