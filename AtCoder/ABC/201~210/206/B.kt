fun main() {
    val n = readLine()!!.toInt()
    var i = 1
    var sum = 0
    while (true) {
      sum += i
      if (sum >= n) break
      else i++
    }
    println(i)
}
