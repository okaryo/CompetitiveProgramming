n = gets.to_i
a = gets.split.map(&:to_i)
b = gets.split.map(&:to_i)
c = Array.new(n, 0)
c[0] = a[0] * b[0]
max_a = a[0]
1.upto(n-1) do |i|
  max_a = [max_a, a[i]].max
  c[i] = [c[i-1], max_a * b[i]].max
end
puts c
