fun main() {
    val n = readLine()!!.toInt()
    val sum = readLine()!!.split(" ").map { it.toInt() - 10 }.filter { it > 0 }.sum()
    println(sum)
}
