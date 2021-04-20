fun main() {
    val list = readLine()!!.split(" ").map { it.toInt() }
    println((list[1] * list[2] - 1) / list[0])
}
