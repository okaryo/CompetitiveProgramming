k = gets.to_i
ans = 0
1.upto(k) do |a|
  t = k / a
  1.upto(t) do |b|
    ans += k / (a * b)
  end
end
puts ans
