import kotlin.math.max

fun main() {
    val ndh = readLine()!!.split(" ").map(String::toDouble)
    var ans = 0.0
    repeat (ndh[0].toInt()) {
        val dh = readLine()!!.split(" ").map(String::toDouble)
        ans = [ans, dh[1] - dh[0] * (ndh[2] - dh[1]) / (ndh[1] - dh[0])].max()!!
    }
    println(ans)
}
