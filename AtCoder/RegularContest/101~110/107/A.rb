a,b,c = gets.split.map(&:to_i)
mod = 998244353
puts a*b*c*(a+1)*(b+1)*(c+1)/8%mod
