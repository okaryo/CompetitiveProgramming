N = gets.to_i
x = []
ans = Array.new(N+1, 0)
N.times do
  a,b = gets.split.map(&:to_i)
  x << [a, 1]
  x << [a+b, -1]
end
x.sort!
count = 0
(x.size-1).times do |i|
  count += x[i][1]
  ans[count] += x[i+1][0] - x[i][0]
end
puts(ans[1, N].join(' '))
