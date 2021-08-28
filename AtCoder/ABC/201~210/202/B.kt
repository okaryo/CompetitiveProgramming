fun main() {
  val s = readLine()!!.reversed()
  s.forEach { c ->
      val ch = when(c) {
          '9' -> '6'
          '6' -> '9'
          else -> c
      }
      print(ch)
  }
}
