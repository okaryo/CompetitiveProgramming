n = gets.to_i
a = gets.split.map(&:to_i).sort!
sum_a = []
a.each_with_index do |ai, i|
  if i.zero?
    sum_a << ai
  else
    sum_a << ai + sum_a[i - 1]
  end
end

ans = 0
0.upto(n-1) do |i|
  ans += ((sum_a[n-1] - sum_a[i]) - (n-1-i)*a[i])
end
puts ans
