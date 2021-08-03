fun main() {
    val p = readLine()!!.toInt()
    var t = 1
    val coins = MutableList(10) {
        val num = (it + 1) * t
        t *= (it + 1)
        num
    }.sortedDescending()
    var remain = p
    var sum = 0
    coins.forEach { 
        if (remain >= it) {
          sum += remain / it
          remain %= it
        }
    }
    println(sum)
}
