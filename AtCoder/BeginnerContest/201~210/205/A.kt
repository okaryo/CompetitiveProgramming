fun main() {
    val ab = readLine()!!.split(" ").map(String::toDouble)
    val a = ab[0]
    val b = ab[1]
    println(a * b / 100)
}
