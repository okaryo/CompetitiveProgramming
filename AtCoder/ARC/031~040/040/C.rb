N = gets.to_i
S = N.times.map{gets.chomp}

ans = 0
s = S.dup
N.times do |i|
  (N-1).downto(0) do |j|
    if s[i][j] == '.'
      ans += 1
      j.downto(0) do |k|
        s[i][k] = 'o'
      end
      unless i == N-1
        j.upto(N-1) do |k|
          s[i+1][k] = 'o'
        end
      end
    end
  end
end

puts ans
