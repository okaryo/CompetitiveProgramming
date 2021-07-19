import kotlin.math.*

fun main() {
    val naxy = readLine()!!.split(" ").map(String::toInt)
    val ans = min(naxy[0], naxy[1]) * naxy[2] + max(0, naxy[0] - naxy[1]) * naxy[3]
    print(ans)
}
