N = gets.to_i
S = []
1.upto(N).map{S << gets.chomp.chars}

ans = false
0.upto(N-1) do |i|
  0.upto(N-1) do |j|
    # yoko
    if j + 5 < N
      count = 0
      0.upto(5) do |k|
        if S[i][j + k] == '#'
          count += 1
        end
      end
      ans = true if count >= 4
    end

    # sita
    if i + 5 < N
      count = 0
      0.upto(5) do |k|
        if S[i + k][j] == '#'
          count += 1
        end
      end
      ans = true if count >= 4
    end

    # naname ue
    if j + 5 < N && i - 5 >= 0
      count = 0
      0.upto(5) do |k|
        if S[i - k][j + k] == '#'
          count += 1
        end
      end
      ans = true if count >= 4
    end

    # naname sita
    if j + 5 < N && i + 5 < N
      count = 0
      0.upto(5) do |k|
        if S[i + k][j + k] == '#'
          count += 1
        end
      end
      ans = true if count >= 4
    end
  end
end

puts ans ? 'Yes' : 'No'
