N = gets.to_i
A = gets.split.map(&:to_i)

unless A[0] == 0
  puts -1
  exit
end

ans = 1
pre = 0
(N).downto(1) do |i|
  if A[i] > 2**i
    puts -1
    exit
  end

  ans += [A[i] + pre, 2**i].min
  pre = A[i]
end

puts ans
