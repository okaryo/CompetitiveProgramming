fun main() {
    val n = readLine()!!.dropLastWhile { it == '0' }
    if (n == n.reversed()) println("Yes")
    else println("No")
}
