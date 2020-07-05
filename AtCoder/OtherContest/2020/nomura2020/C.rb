N = gets.to_i
A = gets.split.map(&:to_i)

sum_a = Array.new(N+2, 0)
(N).downto(0) do |i|
  sum_a[i] = sum_a[i+1] + A[i]
end

ans = 0
b = 1

0.upto(N) do |i|
  if b < A[i]
    puts -1
    exit
  end

  ans += b
  b -= A[i]
  b = [2 * b, sum_a[i+1]].min
end

puts ans
