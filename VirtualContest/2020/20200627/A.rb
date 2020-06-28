n = gets.to_i
a = gets.split.map(&:to_i)

each_sum = Array.new(n+1, 0)
a.each_with_index do |a_v, index|
  each_sum[index + 1] = a_v + each_sum[index]
end

val = {}
each_sum.each do |x|
  val[x] ||= 0
  val[x] += 1
end

ans = 0
val.each do |_, v|
  ans += (v * (v - 1)) / 2
end

puts ans
