fun main() {
    val t = readLine()!!.toInt()
    for (i in 1..t) {
        val n = readLine()!!.toLong()
        when(n % 4) {
            0L -> println("Even")
            2L -> println("Same")
            else -> println("Odd")
        }
    }
}
