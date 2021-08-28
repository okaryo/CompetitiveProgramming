fun main() {
    val ab = readLine()!!.split(" ").map(String::toInt)
    val a = ab.first()
    val b = ab[1]
    if (a > b) {
        println(0)
    } else {
        println(b - a + 1)
    }
}
