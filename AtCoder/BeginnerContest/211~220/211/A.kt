fun main() {
    val ab = readLine()!!.split(" ").map(String::toDouble)
    println((ab[0] - ab[1]) / 3 + ab[1])
}
