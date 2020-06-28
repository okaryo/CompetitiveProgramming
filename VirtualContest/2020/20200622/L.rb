n = gets.to_i

ans = 0
1.upto(n) do |x|
  unless x % 3 == 0 || x % 5 == 0
    ans += x
  end
end

puts ans