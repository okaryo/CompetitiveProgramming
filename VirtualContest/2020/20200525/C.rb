n = gets.to_i

mod = 10007

ar = Array.new(10**6 + 10, 0)
ar[0] = 0
ar[1] = 0
ar[2] = 1

3.upto(ar.length - 1) do |i|
  ar[i] = ar[i - 1] + ar[i - 2] + ar[i - 3]
  ar[i] %= mod
end

puts ar[n - 1]
