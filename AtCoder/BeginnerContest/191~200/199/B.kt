fun main() {
    val n = readLine()!!.toInt()
    val a = readLine()!!.split(" ").map { it.toInt() }
    val b = readLine()!!.split(" ").map { it.toInt() }
    val maxa = a.max()!!
    val minb = b.min()!!
    println(listOf(0, minb - maxa + 1).max())
}
