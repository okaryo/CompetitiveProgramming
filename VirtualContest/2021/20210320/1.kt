fun main() {
    val e: List<Int> = readLine()!!.split(" ").map { it.toInt() }
    val b = readLine()!!.toInt()
    val l: List<Int> = readLine()!!.split(" ").map { it.toInt() }
    val matchCount = l.count { e.contains(it) }
    var ans: Int
    if (matchCount == 6) {
        ans = 1
    } else if (matchCount == 5) {
        ans = if (l.contains(b)) 2 else 3
    } else if (matchCount == 4) {
        ans = 4
    } else if (matchCount == 3) {
        ans = 5
    } else {
        ans = 0
    }
    println(ans)
}
