s = gets.to_i
mod = 10**9 + 7
ans = 0
ar = Array.new(s+1, 1)
ar[0], ar[1], ar[2] = [0, 0, 0]
4.upto(s) do |n|
  c = [0 , n - 3 * 2 + 1].max + 1
  c.times do |ci|
    r = n - ci - 3
    ar[n] += ar[r]
    ar[n] %= mod
  end
end
puts ar[s]
