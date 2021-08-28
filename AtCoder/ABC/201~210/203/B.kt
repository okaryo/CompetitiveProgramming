fun main() {
    val nk = readLine()!!.split(" ").map { it.toInt() }
    var sum = 0
    for (i in 1..nk[0]) {
        for (j in 1..nk[1]) {
            sum += "${i}0${j}".toInt()
        }
    }
    println(sum)
}
