fun main() {
    val n = readLine()!!.toInt()
    val s = readLine()!!
    repeat(n) {
        if  (s[it] == '1') {
            if (it % 2 == 0) println("Takahashi")
            else println("Aoki")
            return
        }
    }
}
