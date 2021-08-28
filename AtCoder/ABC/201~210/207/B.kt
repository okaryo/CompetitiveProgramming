import kotlin.math.floor

fun main() {
    val abcd = readLine()!!.split(" ").map(String::toInt)
    val dif = abcd[2] * abcd[3] - abcd[1]
    val ans = if (0 < dif) Math.floor(1.0 * (abcd[0] + dif - 1) / dif).toInt() else -1
    println(ans)
}
