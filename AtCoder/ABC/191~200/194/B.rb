n = gets.to_i
a,b = n.times.map{gets.split.map(&:to_i)}.transpose
ans = 10**10
n.times do |i|
  n.times do |j|
    ans = [ans, i == j ? a[i] + b[j] : [a[i], b[j]].max].min
  end
end
puts ans
