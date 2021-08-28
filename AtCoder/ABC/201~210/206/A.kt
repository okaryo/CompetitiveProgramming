import kotlin.math.*

fun main() {
    val n = readLine()!!.toInt()
    val price = floor(1.08 * n).toInt()
    if (price < 206) println("Yay!")
    else if (price == 206) println("so-so")
    else println(":(")
}
