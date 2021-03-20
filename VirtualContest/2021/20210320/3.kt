fun main() {
    val n = readLine()!!.toInt()
    val a: List<Int> = readLine()!!.split(" ").map { it.toInt() }
    var sum = 0
    var s = 0
    println(a.reduce { sum, it -> sum * 2 + it })
}
