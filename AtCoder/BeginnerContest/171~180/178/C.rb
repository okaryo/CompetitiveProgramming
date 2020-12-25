n = gets.to_i
mod = 10**9 + 7
ten_n = 1
nine_n = 1
eight_n = 1
n.times do
  ten_n *= 10
  ten_n %= mod
  nine_n *= 9
  nine_n %= mod
  eight_n *= 8
  eight_n %= mod
end

puts (ten_n - (nine_n * 2 % mod - eight_n)) % mod
