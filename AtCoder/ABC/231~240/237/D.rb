N = gets.to_i
S = gets.chomp
ans = [N]
(N-1).downto(0) do |i|
  if S[i] == 'L'
    ans.append(i)
  else
    ans.prepend(i)
  end
end

puts ans.join(' ')
