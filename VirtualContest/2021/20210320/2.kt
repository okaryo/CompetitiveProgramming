fun main() {
    val list: List<Int> = readLine()!!.split(" ").map { it.toInt() }
    println(listOf((list.first() + 1) * list.last(), (list.last() + 1) * list.first()).max())
}
