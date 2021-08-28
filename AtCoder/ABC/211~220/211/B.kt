fun main() {
    val t = mutableMapOf("H" to 0, "2B" to 0, "3B" to 0, "HR" to 0)
    repeat(4) {
      val s = readLine()!!
      t[s] = t.getOrDefault(s, 0) + 1
    }
    if (t.all { (_, value) -> value > 0 }) println("Yes")
    else println("No")
}
