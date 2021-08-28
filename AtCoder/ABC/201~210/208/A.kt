fun main() {
    val ab = readLine()!!.split(" ").map(String::toInt)
    val a = ab[0]
    val b = ab[1]
    if (a > b || b > a * 6) {
        println("No")
    } else {
        println("Yes")
    }
}
