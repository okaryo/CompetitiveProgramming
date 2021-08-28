fun main() {
    val ab = readLine()!!.split(" ").map(String::toInt)
    if (ab[0] > 0 && ab[1] == 0) {
      println("Gold")
    } else if (ab[0] == 0 && ab[1] > 0) {
      println("Silver")
    } else {
      println("Alloy")
    }
}
