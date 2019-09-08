fun main(args: Array<String>) {
  val n = readLine()!!.toInt()
  val ar = readLine()!!.split(" ").map{ it.toInt() }
  val st = ar.toMutableSet()
  if (st.size < 3) {
    println("-1 -1 -1")
  } else {
    var a2 = ar.map { it }
    a2.distinct()
    a2.sorted()
    for (i in 1..n) {
      if (a2[0] == ar[i-1]) {
        print(i)
        print(" ")
        break
      }
    }
    for (i in 1..n) {
      if (a2[1] == ar[i-1]) {
        print(i)
        print(" ")
        break
      }
    }
    for (i in 1..n) {
      if (a2[2] == ar[i-1]) {
        println(i)
        break
      }
    }
  }
}