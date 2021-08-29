N = gets.to_i
s,t = N.times.map{gets.split}.transpose
N.times do |i|
  (i+1).upto(N-1) do |j|
    if s[i] == s[j] && t[i] == t[j]
      puts('Yes')
      exit 0
    end
  end
end
puts('No')
